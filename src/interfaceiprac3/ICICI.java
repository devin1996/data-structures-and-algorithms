package interfaceiprac3;

public class ICICI implements Notification{

	@Override
	public void notificationBySms() {
		// TODO Auto-generated method stub
		System.out.println("ICICI - Notification By SMS");
		
	}

	@Override
	public void notificationByEmail() {
		// TODO Auto-generated method stub
		System.out.println("ICICI - Notification By Mail");
	}

	@Override
	public void notificationByCourier() {
		// TODO Auto-generated method stub
		System.out.println("ICICI - Notification By Mail");
	}

}
