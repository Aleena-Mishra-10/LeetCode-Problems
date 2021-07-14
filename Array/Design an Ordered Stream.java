class OrderedStream {

    private int pointer;
    private final String[] array;
    public OrderedStream(int n) {
        array = new String[n];
    }
    
    public List<String> insert(int idKey, String value) {
        array[idKey-1] = value;
        if(array[pointer]==null){
            return new ArrayList<>();
        }
        List<String> list = new ArrayList<>();
        for(int i=pointer;i<array.length;i++){
            if(array[i]==null){
                pointer = i;
                break;
            }
            list.add(array[i]);
        }
        return list;
    }
}
