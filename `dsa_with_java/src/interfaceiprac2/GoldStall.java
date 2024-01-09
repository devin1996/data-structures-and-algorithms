package interfaceiprac2;

public class GoldStall implements Stall{
	
	private String stallName;
	private int cost;
	private String ownerName;
	private int tvSet;
	
	
	public GoldStall(String stallName, Integer cost, String ownerName, Integer tvSet) {
		super();
		this.stallName = stallName;
		this.cost = cost;
		this.ownerName = ownerName;
		this.tvSet = tvSet;
	}
	
	
	public GoldStall() {
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
	public Integer getTvSet() {
		return tvSet;
	}
	public void setTvSet(Integer tvSet) {
		this.tvSet = tvSet;
	}

	@Override
	public void display() {

		System.out.print("Stall Name: " + getStallName());
		System.out.print("Cost: " + getCost());
		System.out.print("Owner Name: " + getOwnerName());
		System.out.print("Number of TV Sets: " + getTvSet());

	}
	
}
