/* Programm statistics changed by
 * Michael Stumpf
 */

#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

//creates N random numbers
void rand(double* p, int N){
 for (int i=0; i<N; i++){
  p[i] = rand()/double(RAND_MAX);
  //cout << p[i] << endl; //uncomment to check random numbers
 }
}

//calculates mean value and variance of an array p[N]
void moments(double* p, int N, double& mean, double& var){
  for(int i=0; i<N; i++){
    mean += p[i];
  }		//loop for mean value
  mean = mean/double(N);
  for(int i=0; i<N; i++){
    var += (p[i]-mean)*(p[i]-mean);
  }		//loop for variance
  var = var/double(N);
}

int main(){
   const int N = 100;
   double p[N];
   double mean=0, var=0;
   rand(p, N);			//Create random numbers
   moments(p, N, mean, var);	//calculate mean value and variance of p[N]
   
   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
