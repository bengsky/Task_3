address findElementList(char nama[], SingleLinkedList L){
    address P=first(L);
    while(strcmp(nama,info(P).nama)!=Nil && P!=Nil){
        P=next(P);
    }
    return P;
}

void printAll(SingleLinkedList L){
	if (isListEmpty(L)){
		cout<<"List kosong"<<endl;
	}
	else{
		address P = first(L);
        while(P!=Nil) {
            cout <<"ID="<<info(P).id<<"Nama="<<info(P).nama<<", Departemen="<<info(P).departemen<<", Gedung="<<info(P).gedung<<endl;
            P = next(P);
	    }
	}
	getch();
}
