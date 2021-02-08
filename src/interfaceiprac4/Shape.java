package interfaceiprac4;

public class Shape {
	public static Double value1;
	public static Double value2;
	
	public static class Rectangle {

		public Double getval1(){
			return value1;
		} 
		
		public Double getval2(){
			return value2;
		} 
		
		public void setValue1(Double val1) {
			value1=val1;
		}
		
		public void setValue2(Double val2) {
			value2=val2;
		}
		
		public Double computeRectangleArea() {
			return getval1()*getval2();
		}
	}
	
	public static class Triangle {
		
		public Double getvals1(){
			return value1;
		} 
		
		public Double getvals2(){
			return value2;
		} 
		
		public void setValue1(Double val1) {
			value1=val1;
		}
		
		public void setValue2(Double val2) {
			value2=val2;
		}
		
		public Double computeTriangleArea() {
			return (0.5)*(getvals1()*getvals2());
		}
	}	
}
