# include <iostream>

int sum_diagonal(int array[4][4]);

int main(){

    int array[4][4] = {{1,5,5,5},{5,1,5,5},{5,5,1,5},{5,5,5,1}};
    int result = sum_diagonal(array);

    // std::cout << result << std::endl;

    return 0;
}
