// I never released the content of this file 
// basically you need to download what the server writes to the sprx when you go a valid key
//Reflex V2.5 would have TOC with null offset following we had to put the right offsets next to the TOC of the game
//so it would call the functions and not crash

int dword_5590[] = { 0x25101D8, 0x2510370, 0x25102D8, 0x2510318, 0x25102E0, 0x25102F8, 0x2510310, 0x25102B8, 0x25102C8, 0x25101A8, 0x2510358, 0x2510328, 0x2510368, 0x24C06C8, 0x24C02D8, 0x24C02E0, 0x2630718, 0x2630708, 0x2630C00, 0x2630B38, 0x2710C94 };
char unk_55F5[] = { 0x01, 0x4A, 0x6F, 0x2D, 0x4D, 0x69, 0x6C, 0x6B, 0x52, 0x65, 0x66, 0x6C, 0x65, 0x78, 0x4B, 0x65, 0x79, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F };
char* unk_string = "Reflex Engine v2.5 Is Initializing";
short data = 0x101;
char byte_574E[] = { 1, 5, 0, 0x74, 0x4A, 0x6F, 0x2D, 0x4D, 0x69, 0x6C, 0x6B, 0x52, 0x65, 0x66, 0x6C, 0x65, 0x78, 0x4B, 0x65, 0x79, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0, 0, 0, 0, 1, 5, 0, 0x77, 0, 0, 0, 0, 1, 5, 0, 0x78, 0, 0, 0, 0, 1, 5, 0, 0x79, 0, 0, 0, 0, 1, 5, 0, 0x7A, 0, 0, 0, 0, 1, 5, 0, 0x7B };
char byte_579C[] = { 3, 0x91, 0x30, 0x45, 0x41, 0x46, 0x36, 0x44, 0x30, 0x46, 0x47, 0x33, 0x45, 0x37, 0x42, 0x44, 0x43, 0x30, 0, 0 };
Crack_ReflexMw2()
{
sys_dbg_write_process_memory(/*some offset held by dword_597C + 3*/, dword_5590, 0x64);
sys_dbg_write_process_memory(0x307BC, 0xB, 1);
Sleep(0x110);
sys_dbg_write_process_memory(0x307BC, unk_55F5, 0x21);
Sleep(0x10);
sys_dbg_write_process_memory(0x30E88, unk_string, 0x134);
sys_dbg_write_process_memory(0x31080, 0xD00D8A90, 4);
Sleep(0x10);
sys_dbg_write_process_memory(0x310AC, byte_574E, 0x4C);
Sleep(0x10); 
sys_dbg_write_process_memory(0x312B8, data, 2);
Sleep(0x10); 
sys_dbg_write_process_memory(0x312F2, byte_579C, 0x12);
  //add missng variables here
}
