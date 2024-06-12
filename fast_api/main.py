from fastapi import FastAPI
from pydantic import BaseModel
from Crypto.Cipher import AES

import base64
import uvicorn


app = FastAPI()


def decrypt_password(password: str, key: bytes, iv: bytes) -> str:
    """
    decrypt_password: Decrypts a password using AES encryption
    """

    cipher = AES.new(key, AES.MODE_CBC, iv)
    decrypted_bytes = cipher.decrypt(base64.b64decode(password))

    # Remove padding
    return decrypted_bytes[:-decrypted_bytes[-1]].decode("utf-8")


class DecryptionRequest(BaseModel):
    username: str
    password: str


@app.post("/decrypt")
async def decrypt_password_endpoint(request: DecryptionRequest):
    """
    decrypt_password_endpoint: Decrypts a password using AES encryption
    """

    key = b'mySecretKey12345'
    iv = b'myIVmyIVmyIVmyIV'
    password = request.password
    decrypted_password = decrypt_password(password, key, iv)

    return {"username": request.username, "password": decrypted_password}


if __name__ == "__main__":
    uvicorn.run(app, host="127.0.0.1", port=8000)