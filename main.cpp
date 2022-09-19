/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

//setting data public
int z = 4;


int main()
{
    // variable berbentuk array yang menampung data z
    // meliputi 0,1,2,3
    int zNilai[z] = {};
    int pangkat[z] = {};
    int tmpHitung[z][z] = {};
    int hitung = 0;
    
    //menampung nilai pangkat 
    for(int i = 0; i<z; i++){
        pangkat[i] = i+1;
    }
    
    //mengambil nilai z
    for(int i = 0; i<z; i++){
        zNilai[i] = i;
    }
    
    cout<<"Menghitung nilai dari pangkat awal"<<endl;
    cout<<"============================================================================"<<endl;
    //menghitung pangkat
    for(int i=0; i<z; i++){ //ini adalah perulangan z nilai
        for(int j= 0; j<z; j++){ //ini adalah pangkat
        hitung = 0;
            for(int a = 0; a<pangkat[j]; a++){ //ini menghitung nilai dari pangkat
                if(zNilai[i]==0){
                 hitung = 0;
                } else {
                 hitung = hitung+zNilai[i];   
                }
            }
            tmpHitung[i][j] = hitung; //mendapatkan hasil perhitungan pangkat
        }
    }
  
    //menampilkan data perhitungan pangkat
    for(int i=0; i<z; i++){ //ini adalah perulangan z nilai
        for(int j= 0; j<z; j++){ //ini adalah pangkat
            cout<<"["<<i<<"]["<<j+1<<"] : "<<tmpHitung[i][j]<<endl; //mendapatkan hasil perhitungan
        }
        cout<<endl;
    }
    
    cout<<"Menghitung nilai dari pangkat kedua"<<endl;
    cout<<"============================================================================"<<endl;
    
    //melakukan rumus perhitungan
    int data = 0;
    int tmpLoop = 0;
    int pnkt[z][z] = {};
    int hsl[z][z] = {};
    
    //perhitungan hasil dari pangkat
    for(int i =0; i<z; i++){
        for(int j=0; j<z; j++){
            for(int a=0; a<tmpHitung[i][j]; a++){
                if(data==z){
                    data = 1;
                    tmpLoop = 1;
                } else {
                    if(tmpLoop==z){
                        tmpLoop = 1;
                        data = 1;
                    } else {
                        tmpLoop = tmpLoop+1;
                        data = data+1;
                    }
                }
            }
            pnkt[i][j] = tmpLoop; 
            
            if(data==z){
             hsl[i][j] = 0;  //hasil apabila nilai 4
            } else {
             hsl[i][j] = data; //hasl jika tidak bernilai 4
            }
            
            //mengembalikan nilai data
            data = 0;
            tmpLoop = 0;
        }
    }
    
    //menampilkan hasil data
    for(int i =0; i<z; i++){
        for(int j=0; j<z; j++){
            cout<<"* ["<<i<<"]["<<j<<"] - Pangkat : ["<<i<<"]^["<<j+1<<"] = "<<hsl[i][j]<<endl;
        }
        cout<<endl;
    }
    
    //menampilkan hasil utama
        cout<<"Mendapatkan Hasil"<<endl;
    cout<<"============================================================================"<<endl;
        //menampilkan hasil data
    for(int i =0; i<z; i++){
        for(int j=0; j<z; j++){
            if(hsl[i][j]==0){
                cout<<"No."<<i+1<<" ["<<i<<"]^["<<j+1<<"] = "<<hsl[i][j]<<endl;
                break;
            }
        }
    }
}





