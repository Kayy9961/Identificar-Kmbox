#include "KmBoxNetManager.h"

int main()
{
	std::cout << "Waiting for connect device..." << std::endl;

//Remplazar "192.168.2.188" con la IP de tu Kmbox
//Remplazar "0000" con el puerto de tu Kmbox
//Remplazar "0101010101" con los seriales de tu Kmbox

	if (KmBoxMgr.InitDevice("192.168.2.188", 0000, "0101010101") != 0)
	{
		std::cout << "KmBoxNet a fallado." << std::endl;
		goto END;
	}

	std::cout << "KmBoxNet conectado correctamente." << std::endl;

	KmBoxMgr.KeyBoard.StartMonitor(12345);

END:
	system("pause");
	return 0;
}