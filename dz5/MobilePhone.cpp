#include "MobilePhone.h"

void MobilePhone::SetBrand(string brand)
{
	if (brand == " ")
	{
		cout << "�� ������o!" << endl;
	}
	else
		this->brand = brand;
}

string MobilePhone::GetBrand() const
{
	return brand;
}

void MobilePhone::SetColorPhone(string color_phone)
{
	if (color_phone != " ")
	{
		this->color_phone = color_phone;
	}
	else
		cout << "�� ������o!";
}

string MobilePhone::GetColorPhone() const
{
	return color_phone;
}

void MobilePhone::SetColorCase(string case_color)
{
	if (case_color != " ")
	{
		this->case_color = case_color;
	}
	else
		cout << "�� ������o!";
}

string MobilePhone::GetColorCase() const
{
	return case_color;
}

void MobilePhone::SetCountCamers(int count_camers)
{
	if (count_camers > 0)
	{
		this->count_camers = count_camers;
	}
	else
		cout << "�� ������o!";
}

int MobilePhone::GetCountCamers() const
{
	return count_camers;
}

void MobilePhone::SetPrice(double price)
{
	if (price > 0)
	{
		this->price = price;
	}
	else
		cout << "�� ������o!";
}

int MobilePhone::GetPrice() const
{
	return price;
}

void MobilePhone::SetCountContact(int count_contact)
{
	if (count_contact >= 0)
	{
		this->count_contact = count_contact;
	}
	else
		cout << "�� ������o!";
}

int MobilePhone::GetCountContact() const
{
	return price;
}

void MobilePhone::PhoneCall()
{
	cout << call << endl;
}

void MobilePhone::Vibration()
{
	cout << "�������..." << endl;
}

void MobilePhone::TurnOnThePhone()
{
	cout << "������� ���������..." << endl;
}

void MobilePhone::WatchingVideo(Human& human)
{
	if (human.GetEnergy() > 0 && human.GetHungry())
	{
			cout << "�������� ����..." << endl;
			human.Laugh();
			human.SetEnergy(human.GetEnergy() - 20);
			human.SetHungry(human.GetHungry() + 5);
			return;
	}
	else
		cout << "���������� ������ ��� �� ��������" << endl;
}

void MobilePhone::SetBattery(int battery)
{
	if (battery >= 0 && battery <= 100)
	{
		this->battery = battery;
	}
	else
		cout << "�� ������o!";
}
int MobilePhone::GetBattery() const
{
	return battery;
}
void MobilePhone::Print()
{
	cout << "�������: " << endl;
	cout << "�����:" << brand << endl;
	cout << "�i���� ������:" << battery <<"%" << endl;
	cout << "�i���i��� �����:" << count_camers << endl;
}