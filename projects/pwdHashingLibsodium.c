#include <sodium.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* 
1) install lib sudo apt install libsodium-dev;
2) compile & link gcc pwdHashingLibsodium.c -lsodium 

*/

bool hash_f(const char *clear_text, size_t clear_text_len,char *hash){
  if (crypto_pwhash_str(
            hash,
            clear_text,
            clear_text_len,
            crypto_pwhash_OPSLIMIT_INTERACTIVE,
            crypto_pwhash_MEMLIMIT_INTERACTIVE) != 0)
  return NULL;
    
return true;
}

bool pwd_verify(const char *stored_hash,char *input_password, size_t input_password_len ){
   //char stored_hash[] ="$argon2id$v=19$m=65536,t=2,p=1$..."; // from file
    //char input_password[] = "mySecretPassword";

    int res =crypto_pwhash_str_verify(
            stored_hash,
            input_password,
            input_password_len);

return res == 0;
}



int main() {

    if (sodium_init() < 0) {
        return 1;
    }

    char password[] = "123456"; 
    char hash[crypto_pwhash_STRBYTES]={0};
    if(! hash_f(password, sizeof password ,hash))
    printf("Password hashing failed :D \n");
    if(hash_f(password, sizeof password ,hash))
    printf("Password hashed :D \n");
    //in prod env use sodium_memzero(password, sizeof password); to zero the var in memory 
    if(pwd_verify(hash,password,sizeof password))//in prod env use sodium_memzero(password, sizeof password); to zero the var in memory 
    printf("Password OK\n");
    else
    fprintf(stderr,"Invalid password !\n");

    return 0;
}

