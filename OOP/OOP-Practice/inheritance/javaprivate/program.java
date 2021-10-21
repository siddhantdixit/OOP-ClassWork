class Program {
    private int mem = 3;

    public void check() {
        System.out.println("Hello");
    }
}

class OtherProgram extends Program {
    public static void main(String[] args) {
        OtherProgram x = new OtherProgram();
        System.out.println(x);
    }
}