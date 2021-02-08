package interfaceiprac2;

public class PremiumStall implements Stall {

	private String stallName;
	private Integer cost;
	private String ownerName;
	private Integer projector;

	public PremiumStall(String stallName, Integer cost, String ownerName, Integer projector) {
		super();
		this.stallName = stallName;
		this.cost = cost;
		this.ownerName = ownerName;
		this.projector = projector;
	}

	public PremiumStall() {
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

	public Integer getProjector() {
		return projector;
	}

	public void setProjector(Integer projector) {
		this.projector = projector;
	}

	@Override
	public void display() {

		System.out.print("Stall Name: " + getStallName());
		System.out.print("Cost: " + getCost());
		System.out.print("Owner Name: " + getOwnerName());
		System.out.print("Number of TV Screens: " + getProjector());

	}

}
