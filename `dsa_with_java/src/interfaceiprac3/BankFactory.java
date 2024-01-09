package interfaceiprac3;

public class BankFactory {
	
	public ICICI getIcici() {
		ICICI ICICIObj = new ICICI();
		return ICICIObj;
	}
	
	public HDFC getHdfc() {
		HDFC HDFCObj= new HDFC();
		return HDFCObj;
	}
}
