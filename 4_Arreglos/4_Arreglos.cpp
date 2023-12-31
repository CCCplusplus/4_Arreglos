﻿//como escribir ñ
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <iomanip>
#include "Array.h"
#include "ArrayChar.h"
#include "GenericArray.h"
#include "Character.h"
//Tarea hacer una clase de array que utilice char.

typedef GenericArray<std::string> StringArray;

int main()
{
    //decirle a windoes que queremos characteres em UTF8
    SetConsoleOutputCP(CP_UTF8);
    std::fstream savefile("data.sav", std::ios::in | std::ios::out);

    std::cout << u8"El niño 🔫 y el pingüino 🐧 son amigos\n";
    std::cout << u8"esto es una arroba \x40 \n";
    std::cout << "Kanji de den \xE9\x9B\xBB" << "\n";
    std::cout << "Esto es un Emoji \xF0\x9F\x92\x80" << "\n";

    //Imprimir un arreglo de emojis
    std::cout << "Emojis del F09F9200 al F09200 al F09F92FF\n";
    char emojibytes[5] = "\xF0\x9F\x92\x00";
    std::cout << emojibytes << "\n";

    //escribir los bytes en cadena
   // for (int c = 0; c < 5; c++) 
   // {
   //     std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(static_cast<unsigned char>(emojibytes[c]));
   // }
   // std::cout << std::endl;

   // //Imprimir valores hexa emoji
   // for (int i = 0; i <= 0xF; i++) //0xF es 16
   // {
   //     for (int j = 0; j <= 0xF; j++) 
   //     {
   //         for (int c = 0; c < 5; c++)
   //         {
   //             std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(static_cast<unsigned char>(emojibytes[c]));
   //         }
   //         std::cout << "  ";
   //         emojibytes[3] += 1;
   //     }
   //     std::cout << "\n";
   // }

   // emojibytes[3] = 0;

   // //imprimir emoji
   // for (int i = 0; i <= 0xF; i++) //0xF es 16
   // {
   //     for (int j = 0; j <= 0xF; j++)
   //     {
   //         
   //         std::cout << emojibytes << "  ";
   //         emojibytes[3] += 1;
   //     }
   //     std::cout << "\n";
   // }

   // //Seccion pruebas de clase Array
   // Array* arreglodegatos = new Array(9);

   // std::cout << "size of uint32: " << sizeof(unit32) << "\n";
   // std::cout << "Arreglo de uint32" << "\n";

   // const char* gato = "\xf0\x9f\x90\x88"; //cat face 

   //// std::cout << "\xf0\x9f\x90\x88" << "\n";

   // arreglodegatos->Clear();
   // arreglodegatos->Set(5, gato);
   // arreglodegatos->Set(6, 65536);
   // arreglodegatos->Set(0, "\xF0\x9F\x98\xBC");
   // 

   // 

   // //arreglodegatos->Set(5, static_cast<unit32>("\xf0\x9f\x90\x88"));
   // for (int i = 0; i < arreglodegatos->Size(); i++) 
   // {
   //     //std::cout << arreglodegatos->Get(i) << "\n";
   //     std::cout << (*arreglodegatos)[i] << "\n";
   // }

   // ArrayChar* arreglodechars = new ArrayChar(6);
   // std::cout << "size of char: " << sizeof(char) << "\n";
   // std::cout << "Arreglo de char" << "\n";

   // arreglodechars->Clear();

   // for (int i = 0; i < arreglodechars->Size(); i++)
   // {
   //     std::cout << arreglodegatos->Get(i) << "\n";
   // }

    GenericArray<int> *enteros = new GenericArray<int>(10);

    (*enteros)[0] = 12;
    (*enteros)[1] = 99;
    enteros->PrintValues();
    std::cout << "size of array datatype" << enteros->SizeBytes() << "\n";

    StringArray strings = StringArray(20);


    std::cout << "size of string datatype" << strings.SizeBytes() << "\n";
    strings[0] = "hola";
    strings[1] = "mundo";
    strings[19] = "ultimo";
    strings.PrintValues();
    strings.resize(5);
    strings.PrintValues();

    GenericArray<Entity> entities = GenericArray<Entity>(10);

    entities.PrintValues();
    Inventory armas = Inventory(6);
    armas.PrintValues();

    return 0;
}

