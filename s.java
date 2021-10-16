import java.net.*;
class InetDemo
{ 
public static void main(String args[])
{
try
{	 
InetAddress  ia = InetAddress.getLocalHost();  // getLocalHost()  displays ip address of localhost
System.out.println("The IP address of local host is "+ia);
ia=InetAddress.getByName(args[0]);   //getByName() display ip address of remote host 
System.out.println("the IP address of "+args[0]+"is"+ia);
}
catch(Exception ue)
{
//System.out.println("There is an error "+ue);
}
}
}
