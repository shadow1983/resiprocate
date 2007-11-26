"<form id=\"Parameters\" name=\"Parameters\" method=\"get\" action=\"ParametersSet.html\" onsubmit=\"OnSubmit();\">\n"
"  <table width=\"675\" border=\"1\">\n"
"    <tr>\n"
"      <td width=\"190\">Log type </td>\n"
"      <td width=\"475\"><select name=\"LogType\" id=\"LogType\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>cerr</option>\n"
"        <option>cout</option>\n"
"        <option>syslog</option>\n"
"        <option>file</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Log level </td>\n"
"      <td><select name=\"LogLevel\" id=\"LogLerel\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>NONE</option>\n"
"        <option>EMERG</option>\n"
"        <option>ALERT</option>\n"
"        <option>CRIT</option>\n"
"        <option>ERR</option>\n"
"        <option>WARNING</option>\n"
"        <option>NOTICE</option>\n"
"        <option>INFO</option>\n"
"        <option>DEBUG</option>\n"
"        <option>STACK</option>\n"
"        <option>CERR</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Log path </td>\n"
"      <td><input name=\"LogPath\" type=\"text\" id=\"LogPath\" size=\"80\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Record route </td>\n"
"      <td><input name=\"RecordRoute\" type=\"text\" id=\"RecordRoute\" size=\"80\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Udp port </td>\n"
"      <td><input name=\"UdpPort\" type=\"text\" id=\"UdpPort\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Tcp port </td>\n"
"      <td><input name=\"TcpPort\" type=\"text\" id=\"TcpPort\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Tls domain </td>\n"
"      <td><input name=\"TlsDomain\" type=\"text\" id=\"TlsDomain\" size=\"80\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Tls port </td>\n"
"      <td><input name=\"TlsPort\" type=\"text\" id=\"TlsPort\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Dtls port </td>\n"
"      <td><input name=\"DtlsPort\" type=\"text\" id=\"DtlsPort\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>run a cert server</td>\n"
"      <td><select name=\"CertServer\" id=\"CertServer\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>enable IPV6</td>\n"
"      <td><select name=\"EnableIpv6\" id=\"EnableIpv6\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable IPV4</td>\n"
"      <td><select name=\"DisableIpv4\" id=\"DisableIpv4\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable DIGEST challenges</td>\n"
"      <td><select name=\"DisableAuth\" id=\"DisableAuth\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable auth-int DIGEST challenges</td>\n"
"      <td><select name=\"DisableAuthInt\" id=\"DisableAuthInt\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable HTTP challenges</td>\n"
"      <td><select name=\"DisabaleWebAuth\" id=\"DisabaleWebAuth\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable registrar</td>\n"
"      <td><select name=\"DisableReg\" id=\"DisableReg\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable adding identity headers</td>\n"
"      <td><select name=\"DisableIdentity\" id=\"DisableIdentity\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td height=\"61\">specify interfaces to add transports to</td>\n"
"      <td><textarea name=\"Interfaces\" cols=\"60\" rows=\"5\" id=\"Interfaces\"></textarea></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>specify domains that this proxy is authorative</td>\n"
"      <td><textarea name=\"Domains\" cols=\"60\" rows=\"5\" id=\"Domains\"></textarea></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>specify where to route requests that are in this proxy's domain</td>\n"
"      <td><textarea name=\"Routes\" cols=\"60\" rows=\"5\" id=\"Routes\"></textarea></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>name of request chain</td>\n"
"      <td><input name=\"NameReqChain\" type=\"text\" id=\"NameReqChain\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>run HTTP server on specified port</td>\n"
"      <td><input name=\"HttpPort\" type=\"text\" id=\"HttpPort\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Handle 3xx responses in the proxy</td>\n"
"      <td><select name=\"ReqursiveRedirect\" id=\"ReqursiveRedirect\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Enable sequential q-value processing</td>\n"
"      <td><select name=\"QVal\" id=\"QVal\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Specify forking behavior for q- value targets:</td>\n"
"      <td><select name=\"QValBehavior\" id=\"QValBehavior\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>FULL_SEQUENTIAL</option>\n"
"        <option>EQUAL_Q_PARALLEL</option>\n"
"        <option>FULL_PARALLEL</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Whether to cancel groups of parallel forks after the period specified by the --q-value-ms-before-cancel parameter.</td>\n"
"      <td><select name=\"QValCancelFork\" id=\"QValCancelFork\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Whether to wait for parallel fork groups to terminate before starting new fork-groups.</td>\n"
"      <td><select name=\"QValWaitFork\" id=\"QValWaitFork\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>msec to wait before starting new groups of parallel forks</td>\n"
"      <td><input name=\"QValMsBetween\" type=\"text\" id=\"QValMsBetween\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>msec to wait before cancelling parallel fork groups<br /></td>\n"
"      <td><input name=\"QValMsCancel\" type=\"text\" id=\"QValMsCancel\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>specify enum suffix to search</td>\n"
"      <td><input name=\"EnumSuffix\" type=\"text\" id=\"EnumSuffix\" size=\"80\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>allow To tag in registrations</td>\n"
"      <td><select name=\"AllowBadReg\" id=\"AllowBadReg\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>paralled fork to all matching static routes and (first batch) registrations</td>\n"
"      <td><select name=\"parallelFork\" id=\"parallelFork\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>specify length of timer C in sec (0 or negative will disable timer C)</td>\n"
"      <td><input name=\"TimerC\" type=\"text\" id=\"TimerC\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>set web administrator password</td>\n"
"      <td><input name=\"AdminPassword\" type=\"password\" id=\"AdminPassword\" /></td>\n"
"    </tr>\n"
"  </table>\n"
"  <p align=\"center\">\n"
"    <input type=\"submit\" name=\"Submit\" value=\"Submit\" />\n"
"  </p>\n"
"</form>\n"
"<SCRIPT LANGUAGE=\"JavaScript\">\n"
"\n"
"function setSelect( obj, val )\n"
"{\n"
"	if ( val == \"\" )\n"
"    val = \"nothing\";\n"
"  for ( i=0 ; i<obj.length; i++ )\n"
"    if ( obj.options[i].text.toLowerCase() == val.toLowerCase() )\n"
"		obj.selectedIndex=i; \n"
"}\n"
"\n"
"function setEdit( obj, val )\n"
"{\n"
"	obj.value=val; \n"
"}\n"
"\n"
"function DoOnSubmit( obj )\n"
"{\n"
"	if ( obj.value == \"\" )\n"
"	   obj.value = \" \";\n"
"}\n"
"\n"
"function OnSubmit()\n"
"{\n"
"  DoOnSubmit( document.Parameters.LogType );\n"
"  DoOnSubmit( document.Parameters.LogLevel );\n"
"  DoOnSubmit( document.Parameters.LogPath );\n"
"  DoOnSubmit( document.Parameters.RecordRoute );\n"
"  DoOnSubmit( document.Parameters.UdpPort );\n"
"  DoOnSubmit( document.Parameters.TcpPort );\n"
"  DoOnSubmit( document.Parameters.TlsDomain );\n"
"  DoOnSubmit( document.Parameters.TlsPort );\n"
"  DoOnSubmit( document.Parameters.DtlsPort );\n"
"  DoOnSubmit( document.Parameters.CertServer );\n"
"  DoOnSubmit( document.Parameters.EnableIpv6 );\n"
"  DoOnSubmit( document.Parameters.DisableIpv4 );\n"
"  DoOnSubmit( document.Parameters.DisableAuth );\n"
"  DoOnSubmit( document.Parameters.DisableAuthInt );\n"
"  DoOnSubmit( document.Parameters.DisabaleWebAuth );\n"
"  DoOnSubmit( document.Parameters.DisableReg );\n"
"  DoOnSubmit( document.Parameters.DisableIdentity );\n"
"  DoOnSubmit( document.Parameters.Interfaces );\n"
"  DoOnSubmit( document.Parameters.Domains );\n"
"  DoOnSubmit( document.Parameters.Routes );\n"
"  DoOnSubmit( document.Parameters.NameReqChain );\n"
"  DoOnSubmit( document.Parameters.HttpPort );\n"
"  DoOnSubmit( document.Parameters.ReqursiveRedirect );\n"
"  DoOnSubmit( document.Parameters.QVal );\n"
"  DoOnSubmit( document.Parameters.QValBehavior );\n"
"  DoOnSubmit( document.Parameters.QValCancelFork );\n"
"  DoOnSubmit( document.Parameters.QValWaitFork );\n"
"  DoOnSubmit( document.Parameters.QValMsBetween );\n"
"  DoOnSubmit( document.Parameters.QValMsCancel );\n"
"  DoOnSubmit( document.Parameters.EnumSuffix );\n"
"  DoOnSubmit( document.Parameters.AllowBadReg );\n"
"  DoOnSubmit( document.Parameters.parallelFork );\n"
"  DoOnSubmit( document.Parameters.TimerC );\n"
"}\n"
"\n"
"__ReplaceMe__\n"
"\n"
"</SCRIPT>\n"
"<form id=\"Parameters\" name=\"Parameters\" method=\"get\" action=\"ParametersSet.html\" onsubmit=\"OnSubmit();\">\n"
"  <table width=\"675\" border=\"1\">\n"
"    <tr>\n"
"      <td width=\"190\">Log type </td>\n"
"      <td width=\"475\"><select name=\"LogType\" id=\"LogType\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>cerr</option>\n"
"        <option>cout</option>\n"
"        <option>syslog</option>\n"
"        <option>file</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Log level </td>\n"
"      <td><select name=\"LogLevel\" id=\"LogLerel\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>NONE</option>\n"
"        <option>EMERG</option>\n"
"        <option>ALERT</option>\n"
"        <option>CRIT</option>\n"
"        <option>ERR</option>\n"
"        <option>WARNING</option>\n"
"        <option>NOTICE</option>\n"
"        <option>INFO</option>\n"
"        <option>DEBUG</option>\n"
"        <option>STACK</option>\n"
"        <option>CERR</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Log path </td>\n"
"      <td><input name=\"LogPath\" type=\"text\" id=\"LogPath\" size=\"80\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Record route </td>\n"
"      <td><input name=\"RecordRoute\" type=\"text\" id=\"RecordRoute\" size=\"80\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Udp port </td>\n"
"      <td><input name=\"UdpPort\" type=\"text\" id=\"UdpPort\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Tcp port </td>\n"
"      <td><input name=\"TcpPort\" type=\"text\" id=\"TcpPort\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Tls domain </td>\n"
"      <td><input name=\"TlsDomain\" type=\"text\" id=\"TlsDomain\" size=\"80\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Tls port </td>\n"
"      <td><input name=\"TlsPort\" type=\"text\" id=\"TlsPort\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Dtls port </td>\n"
"      <td><input name=\"DtlsPort\" type=\"text\" id=\"DtlsPort\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>run a cert server</td>\n"
"      <td><select name=\"CertServer\" id=\"CertServer\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>enable IPV6</td>\n"
"      <td><select name=\"EnableIpv6\" id=\"EnableIpv6\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable IPV4</td>\n"
"      <td><select name=\"DisableIpv4\" id=\"DisableIpv4\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable DIGEST challenges</td>\n"
"      <td><select name=\"DisableAuth\" id=\"DisableAuth\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable auth-int DIGEST challenges</td>\n"
"      <td><select name=\"DisableAuthInt\" id=\"DisableAuthInt\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable HTTP challenges</td>\n"
"      <td><select name=\"DisabaleWebAuth\" id=\"DisabaleWebAuth\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable registrar</td>\n"
"      <td><select name=\"DisableReg\" id=\"DisableReg\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>disable adding identity headers</td>\n"
"      <td><select name=\"DisableIdentity\" id=\"DisableIdentity\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td height=\"61\">specify interfaces to add transports to</td>\n"
"      <td><textarea name=\"Interfaces\" cols=\"60\" rows=\"5\" id=\"Interfaces\"></textarea></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>specify domains that this proxy is authorative</td>\n"
"      <td><textarea name=\"Domains\" cols=\"60\" rows=\"5\" id=\"Domains\"></textarea></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>specify where to route requests that are in this proxy's domain</td>\n"
"      <td><textarea name=\"Routes\" cols=\"60\" rows=\"5\" id=\"Routes\"></textarea></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>name of request chain</td>\n"
"      <td><input name=\"NameReqChain\" type=\"text\" id=\"NameReqChain\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>run HTTP server on specified port</td>\n"
"      <td><input name=\"HttpPort\" type=\"text\" id=\"HttpPort\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Handle 3xx responses in the proxy</td>\n"
"      <td><select name=\"ReqursiveRedirect\" id=\"ReqursiveRedirect\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Enable sequential q-value processing</td>\n"
"      <td><select name=\"QVal\" id=\"QVal\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Specify forking behavior for q- value targets:</td>\n"
"      <td><select name=\"QValBehavior\" id=\"QValBehavior\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>FULL_SEQUENTIAL</option>\n"
"        <option>EQUAL_Q_PARALLEL</option>\n"
"        <option>FULL_PARALLEL</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Whether to cancel groups of parallel forks after the period specified by the --q-value-ms-before-cancel parameter.</td>\n"
"      <td><select name=\"QValCancelFork\" id=\"QValCancelFork\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>Whether to wait for parallel fork groups to terminate before starting new fork-groups.</td>\n"
"      <td><select name=\"QValWaitFork\" id=\"QValWaitFork\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>msec to wait before starting new groups of parallel forks</td>\n"
"      <td><input name=\"QValMsBetween\" type=\"text\" id=\"QValMsBetween\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>msec to wait before cancelling parallel fork groups<br /></td>\n"
"      <td><input name=\"QValMsCancel\" type=\"text\" id=\"QValMsCancel\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>specify enum suffix to search</td>\n"
"      <td><input name=\"EnumSuffix\" type=\"text\" id=\"EnumSuffix\" size=\"80\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>allow To tag in registrations</td>\n"
"      <td><select name=\"AllowBadReg\" id=\"AllowBadReg\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>paralled fork to all matching static routes and (first batch) registrations</td>\n"
"      <td><select name=\"parallelFork\" id=\"parallelFork\">\n"
"        <option selected=\"selected\">nothing</option>\n"
"        <option>Yes</option>\n"
"        <option>No</option>\n"
"      </select>\n"
"      </td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>specify length of timer C in sec (0 or negative will disable timer C)</td>\n"
"      <td><input name=\"TimerC\" type=\"text\" id=\"TimerC\" /></td>\n"
"    </tr>\n"
"    <tr>\n"
"      <td>set web administrator password</td>\n"
"      <td><input name=\"AdminPassword\" type=\"password\" id=\"AdminPassword\" /></td>\n"
"    </tr>\n"
"  </table>\n"
"  <p align=\"center\">\n"
"    <input type=\"submit\" name=\"Submit\" value=\"Submit\" />\n"
"  </p>\n"
"</form>\n"
"<SCRIPT LANGUAGE=\"JavaScript\">\n"
"\n"
"function setSelect( obj, val )\n"
"{\n"
"	if ( val == \"\" )\n"
"    val = \"nothing\";\n"
"  for ( i=0 ; i<obj.length; i++ )\n"
"    if ( obj.options[i].text.toLowerCase() == val.toLowerCase() )\n"
"		obj.selectedIndex=i; \n"
"}\n"
"\n"
"function setEdit( obj, val )\n"
"{\n"
"	obj.value=val; \n"
"}\n"
"\n"
"function DoOnSubmit( obj )\n"
"{\n"
"	if ( obj.value == \"\" )\n"
"	   obj.value = \" \";\n"
"}\n"
"\n"
"function OnSubmit()\n"
"{\n"
"  DoOnSubmit( document.Parameters.LogType );\n"
"  DoOnSubmit( document.Parameters.LogLevel );\n"
"  DoOnSubmit( document.Parameters.LogPath );\n"
"  DoOnSubmit( document.Parameters.RecordRoute );\n"
"  DoOnSubmit( document.Parameters.UdpPort );\n"
"  DoOnSubmit( document.Parameters.TcpPort );\n"
"  DoOnSubmit( document.Parameters.TlsDomain );\n"
"  DoOnSubmit( document.Parameters.TlsPort );\n"
"  DoOnSubmit( document.Parameters.DtlsPort );\n"
"  DoOnSubmit( document.Parameters.CertServer );\n"
"  DoOnSubmit( document.Parameters.EnableIpv6 );\n"
"  DoOnSubmit( document.Parameters.DisableIpv4 );\n"
"  DoOnSubmit( document.Parameters.DisableAuth );\n"
"  DoOnSubmit( document.Parameters.DisableAuthInt );\n"
"  DoOnSubmit( document.Parameters.DisabaleWebAuth );\n"
"  DoOnSubmit( document.Parameters.DisableReg );\n"
"  DoOnSubmit( document.Parameters.DisableIdentity );\n"
"  DoOnSubmit( document.Parameters.Interfaces );\n"
"  DoOnSubmit( document.Parameters.Domains );\n"
"  DoOnSubmit( document.Parameters.Routes );\n"
"  DoOnSubmit( document.Parameters.NameReqChain );\n"
"  DoOnSubmit( document.Parameters.HttpPort );\n"
"  DoOnSubmit( document.Parameters.ReqursiveRedirect );\n"
"  DoOnSubmit( document.Parameters.QVal );\n"
"  DoOnSubmit( document.Parameters.QValBehavior );\n"
"  DoOnSubmit( document.Parameters.QValCancelFork );\n"
"  DoOnSubmit( document.Parameters.QValWaitFork );\n"
"  DoOnSubmit( document.Parameters.QValMsBetween );\n"
"  DoOnSubmit( document.Parameters.QValMsCancel );\n"
"  DoOnSubmit( document.Parameters.EnumSuffix );\n"
"  DoOnSubmit( document.Parameters.AllowBadReg );\n"
"  DoOnSubmit( document.Parameters.parallelFork );\n"
"  DoOnSubmit( document.Parameters.TimerC );\n"
"}\n"
"\n"
"__ReplaceMe__\n"
"\n"
"</SCRIPT>\n"
