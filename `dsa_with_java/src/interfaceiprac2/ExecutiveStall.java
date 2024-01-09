package interfaceiprac2;

public class ExecutiveStall implements Stall {

	private String stallName;
	private Integer cost;
	private String ownerName;
	private Integer screen;

	public ExecutiveStall(String stallName, Integer cost, String ownerName, Integer screen) {
		super();
		this.stallName = stallName;
		this.cost = cost;
		this.ownerName = ownerName;
		this.screen = screen;
	}

	public ExecutiveStall() {
		super();
	}

	public String getStallName() {
		return stallName;
	}

	public void setStallName(String stallName) {
		this.stallName = stallName;
	}

	public Integer getCost() {
		return cost;
	}

	public void setCost(Integer cost) {
		this.cost = cost;
	}

	public String getOwnerName() {
		return ownerName;
	}

	public void setOwnerName(String ownerName) {
		this.ownerName = ownerName;
	}

	public Integer getScreen() {
		return screen;
	}

	public void setScreen(Integer screen) {
		this.screen = screen;
	}

	@Override
	public void display() {

		System.out.print("Stall Name: " + getStallName());
		System.out.print("Cost: " + getCost());
		System.out.print("Owner Name: " + getOwnerName());
		System.out.print("Number of TV Screens: " + getScreen());

	}

}
