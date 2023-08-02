
    fstream inputFile;
    fstream outputFile;
    inputFile.open("input.txt", ios::in);
    outputFile.open("output.txt", ios::out);
    if(!inputFile) {
        cout << "No Input File Found"<<endl;
        return 0;
    }