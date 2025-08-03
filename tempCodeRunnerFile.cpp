for(int i=0; i<n; i++){
        for(int k=1; k<n-i; k++){
            cout << " ";
        }
        cout << "*";

        if (i !=0 ) {
            for(int j=0; j<(2*i - 1); j++){
                cout << " ";

            }
            cout << "*";
        }
        cout << endl;
    }