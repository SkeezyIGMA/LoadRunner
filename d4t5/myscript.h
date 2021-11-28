myscript(int upper){
  int pasnum;

  pasnum = (rand() % (upper - 1 +1)) + 1;
  lr_save_int(pasnum, "pasnu");
web_reg_save_param_ex(
  "ParamName=albflight",
    "LB/IC=value=\"",
    "RB/IC=\"",
    "Ordinal=1",
LAST);

web_url("Search Flights Button",
  "URL=http://localhost:1080/cgi-bin/welcome.pl?page=search",
  "TargetFrame=body",
  "Resource=0",
  "RecContentType=text/html",
  "Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home",
  "Snapshot=t3.inf",
  "Mode=HTML",
  LAST);


web_submit_data("reservations.pl",
  "Action=http://localhost:1080/cgi-bin/reservations.pl",
  "Method=POST",
  "TargetFrame=",
  "RecContentType=text/html",
  "Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome",
  "Snapshot=t4.inf",
  "Mode=HTML",
  ITEMDATA,
  "Name=advanceDiscount", "Value={albflight}", ENDITEM,
  "Name=depart", "Value=London", ENDITEM,
  "Name=departDate", "Value=11/23/2021", ENDITEM,
  "Name=arrive", "Value=San Francisco", ENDITEM,
  "Name=returnDate", "Value=11/24/2021", ENDITEM,
  "Name=numPassengers", "Value={pasnu}", ENDITEM,
  "Name=seatPref", "Value=Window", ENDITEM,
  "Name=seatType", "Value=Business", ENDITEM,
  "Name=.cgifields", "Value=roundtrip", ENDITEM,
  "Name=.cgifields", "Value=seatType", ENDITEM,
  "Name=.cgifields", "Value=seatPref", ENDITEM,
  "Name=findFlights.x", "Value=62", ENDITEM,
  "Name=findFlights.y", "Value=15", ENDITEM,
  LAST);

web_submit_data("reservations.pl_2",
  "Action=http://localhost:1080/cgi-bin/reservations.pl",
  "Method=POST",
  "TargetFrame=",
  "RecContentType=text/html",
  "Referer=http://localhost:1080/cgi-bin/reservations.pl",
  "Snapshot=t5.inf",
  "Mode=HTML",
  ITEMDATA,
  "Name=outboundFlight", "Value={albflight}", ENDITEM,
  "Name=numPassengers", "Value={pasnu}", ENDITEM,
  "Name=advanceDiscount", "Value=0", ENDITEM,
  "Name=seatType", "Value=Business", ENDITEM,
  "Name=seatPref", "Value=Window", ENDITEM,
  "Name=reserveFlights.x", "Value=16", ENDITEM,
  "Name=reserveFlights.y", "Value=8", ENDITEM,
  LAST);


web_submit_data("reservations.pl_3",
  "Action=http://localhost:1080/cgi-bin/reservations.pl",
  "Method=POST",
  "TargetFrame=",
  "RecContentType=text/html",
  "Referer=http://localhost:1080/cgi-bin/reservations.pl",
  "Snapshot=t6.inf",
  "Mode=HTML",
  ITEMDATA,
  "Name=firstName", "Value=Jojo", ENDITEM,
  "Name=lastName", "Value=Bean", ENDITEM,
  "Name=address1", "Value=Lubyanka str", ENDITEM,
  "Name=address2", "Value=Moscow", ENDITEM,
  "Name=pass1", "Value=Jojo Bean", ENDITEM,
  "Name=creditCard", "Value=4567456745674567", ENDITEM,
  "Name=expDate", "Value=04/23", ENDITEM,
  "Name=oldCCOption", "Value=", ENDITEM,
  "Name=numPassengers", "Value={pasnu}", ENDITEM,
  "Name=seatType", "Value=Business", ENDITEM,
  "Name=seatPref", "Value=Window", ENDITEM,
  "Name=outboundFlight", "Value={albflight}", ENDITEM,
  "Name=advanceDiscount", "Value=0", ENDITEM,
  "Name=returnFlight", "Value=", ENDITEM,
  "Name=JSFormSubmit", "Value=off", ENDITEM,
  "Name=.cgifields", "Value=saveCC", ENDITEM,
  "Name=buyFlights.x", "Value=26", ENDITEM,
  "Name=buyFlights.y", "Value=5", ENDITEM,
  LAST);

  return 0;
}
