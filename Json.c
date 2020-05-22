1、 字符串转换为JSONObject
JSONObject jsonObject = new JSONObject(response);
2、获取键对应的值
//返回JSONArray
JSONArray HeWeather6= (JSONArray) jsonObject.get("HeWeather6");
//返回JSONObject
JSONObject now= (JSONObject) object.get("now");
//返回字符串
String cond_text=now.getString("cond_txt");
3、遍历JSONArray
for (int i=0;i<data.length();i++){
    //数组中每一个元素又包含了若干参数，所以将每个元素再转换为JSONObject对象
    //通过getJSONObject（索引号）来获取数组中指定的行，并返回JSONObject类型起名为object
    JSONObject object = data.getJSONObject(i);
    //System.out.println(object.getString("uniquekey"));
    //从object中取出键"title"所对应的值并打印
    System.out.println(object.getString("title"));
    //System.out.println(object.getString("date"));
    //System.out.println(object.getString("category"));
}
