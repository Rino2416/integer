#pragma once
//integer 
//1
int FullMeter(int Ñentimeter, int Meter) {
	Meter = Ñentimeter / 100;
	return Meter;
}
//2 
int FullTon( int Kg , int Ton ){
	Ton = Kg / 1000;
	return Ton;
}
//3
int FullKB(int Byte, int KB) {
	KB = Byte / 1024;
	return KB;
}
//4 
int Section(int NumberOne, int NumberTwo,int Section) {
	if (NumberOne && NumberTwo > 0 && NumberOne > NumberTwo) {
		Section = NumberOne / NumberTwo;
		return Section;
	}
}
//5 
int Section(int NumberOne, int NumberTwo, int Section) {
	if (NumberOne && NumberTwo > 0 && NumberOne > NumberTwo) {
		Section = NumberOne % NumberTwo;
		return Section;
	}
}
//6
int TensUnits(int Res , int NumberOne, int Tens, int Units) {
	if (NumberOne > 9) {
		Tens = NumberOne / 10;
		Units = NumberOne % 10;
		Res = Tens, Units;
		return Res;
	}
}
//7
int TensUnitsSum(int Res ,int NumberOne, int Tens, int Units, int Proizved, int Sum) {
	if (NumberOne > 9) {
		Tens = NumberOne / 10;
		Units = NumberOne % 10;
		Sum = Tens + Units;
		Proizved = Tens * Units;
		Res = Sum, Proizved;
		return Res;
	}
}
//8
int TensUnitsReverse(int Res , int NumberOne, int Tens, int Units, int Proizved, int Sum) {
	if (NumberOne > 9) {
		Tens = NumberOne / 10;
		Units = NumberOne % 10;
		cout << Units << Tens;
		Res = Units, Tens;
		return Res;
	}
}
//9
int Hundredths(int NumberOne,int FirstNumber) {
	if (NumberOne > 99 && NumberOne <= 99) {
		FirstNumber = NumberOne %10;
		return FirstNumber;
	}

}
//10
int HundredthsMid(int Res , int NumberOne, int FirstNumber, int SecondNumber) {
	if (NumberOne > 99 && NumberOne <= 999) {
		FirstNumber = NumberOne % 10;
		SecondNumber = NumberOne % 100 / 10;
		Res = FirstNumber , SecondNumber;
		return Res;
	}

}
//11
int ThreeDigit(int Res ,int NumberOne, int Tens, int Units, int Last, int Sum, int Proizved) {
	if (NumberOne > 99 && NumberOne <= 999) {
		Tens = NumberOne % 10;
		Units = NumberOne % 100 / 10;
		Last = NumberOne / 100;
		Sum = Tens + Units + Last;
		Proizved = Tens * Units * Last;
		Res = Sum, Proizved;
		return Res;
	}
}
//12 
int ThreeRever(int Res ,int NumberOne, int Tens, int Units, int Last) {
	if (NumberOne > 99 && NumberOne <= 999) {
		Tens = NumberOne % 10;
		Units = NumberOne % 100 / 10;
		Last = NumberOne / 100;
		cout << Last << Units << Tens;
		Res = Last, Units, Tens;
		return Res;
	}
}
//13
int ThreeLeft(int Res ,int NumberOne, int Tens, int Units, int Last) {
	if (NumberOne > 99 && NumberOne <= 999) {
		Tens = NumberOne % 10;
		Units = NumberOne % 100 / 10;
		Last = NumberOne / 100;
		cout << Units << Tens << Last;
		Res =  Units, Tens, Last;
		return Res;
	}
}
//14
int ThreeRight(int Res , int NumberOne, int Tens, int Units, int Last) {
	if (NumberOne > 99 && NumberOne <= 999) {
		Tens = NumberOne % 10;
		Units = NumberOne % 100 / 10;
		Last = NumberOne / 100;
		cout << Tens << Last << Units;
		Res = Tens, Last, Units;
		return Res;
	}
}
//15
int ThreeChange(int Res , int NumberOne, int Tens, int Units, int Last) {
	if (NumberOne > 99 && NumberOne <= 999) {
		Tens = NumberOne % 10;
		Units = NumberOne % 100 / 10;
		Last = NumberOne / 100;
		cout << Units << Tens << Last;
		Res = Units, Tens, Last;
		return Res;
	}
}
//16
int ThreeChange2(int Res , int NumberOne, int Tens, int Units, int Last) {
	if (NumberOne > 99 && NumberOne <= 999) {
		Tens = NumberOne % 10;
		Units = NumberOne % 100 / 10;
		Last = NumberOne / 100;
		cout << Tens << Last << Units;
		Res = Tens, Last, Units;
		return Res;
	}
}
//17
int OperationThu(int NumberOne, int Res) {
	if (NumberOne > 999) {
		Res = NumberOne % 1000 / 100;
		return Res;
	}
}
//18
int Thousand(int NumberOne, int Res) {
	if (NumberOne > 999) {
		Res = NumberOne % 10000 / 1000;
		return Res;
	}
}
//19
int Minute(int Sec, int Minute) {
	Minute = Sec / 60;
	return Minute;
}
//20
int Hours(int Sec, int Hours) {
	Hours = Sec / 60 / 60;
	return Hours;
}
//21
int Day(int Sec, int Min) {
	Min = Sec%60;
	return Min;
}
//22 
int Day2(int Sec, int Res)
{
	Res = Sec % 3600;
	return Res;
}
//23
int MinHours(int Sec, int Res) {
	Res = Sec % 3600 / 60;
	return Res;
}
//24
int DayWeek(int K, int Res) {
	if (K >= 1 && K <= 365) {
		Res = K % 7;
		return Res;
	}
}
//25
int DayWeek2(int K, int Res) {
	if (K >= 1 && K <= 365) {
		Res = (K+3) % 7;
		return Res;
	}
}
//26
int DayWeek3(int K, int Res) {
	if (K >= 1 && K <= 365) {
		Res = (K + 1) % 7;
		return Res;
	}
}
//27
int DayWeek4(int K, int Res) {
	if (K >= 1 && K <= 365) {
		Res = (K + 5) % 7;
		return Res;
	}
}
//28
int DayWeek3(int N , int K, int Res) {
	if (K >= 1 && K <= 365) {
		if (K >= 1 && K <= 7) {
			Res = (K + N) % 7;
			return Res;
	}
	}
}
//29
int Square(int PPart,int NSquar, int NumberOne, int NumberTwo, int NumberThree, int Res) {
	NSquar = NumberOne * NumberTwo;
	PPart = NumberOne * NumberTwo - NSquar * pow(NumberThree, 2);
	Res = (NSquar, PPart);
	return Res;


}
//30
int Years(int YourYear , int Century) {
	Century = (YourYear / 100) + 1;
	return Century;

}



