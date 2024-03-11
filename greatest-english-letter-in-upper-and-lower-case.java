class Solution {
  public String greatestLetter(String s) {
    if (s.length() == 1) return "";
    String great = "@";
    int[] alpha = new int [58];
    for (char c: s.toCharArray()) {
      if (c <= great.charAt(0)) continue;
      if (c > 'Z') {
        if (c-32 <= great.charAt(0)) continue;
        else if (alpha[c - 32 - 65] == 1) { if (c == 'z') return "Z"; great = Character.toString(c - 32); }
        else alpha[c - 65] = 1;
      }
      else {
        if (alpha[c + 32 - 65] == 1) { if (c == 'Z') return "Z"; great = Character.toString(c); }
        else alpha[c - 65] = 1;
      }
    }
    return (great=="@" ? "" : great);
  }
}
class greatest {
  public static void main (String[] args) {
    Solution S = new Solution();
    System.out.println(S.greatestLetter("lEeTcOdE"));
    System.out.println(S.greatestLetter("arRAzFif"));
    System.out.println(S.greatestLetter("AbCdEfGhIjK"));
    System.out.println(S.greatestLetter("EtaJrJnREOEaurJiCrwnMbUFElllBiCEKbTpbxKUfMVGkBPfrIyOljQQRsVjHqzgAGRQUjoymVNtWKwaylLGiATlpogDvzOqvkpoCpAsFaRNolBPygruHhPPqaCHAzBCcLqAAxxCWrznQpmOMhcqpWIsdKXRiMQTXQBmfPhavhFtUHEVOGHtpisJUVhYvFYvhCChqzwyNXfVPIWpQAdPXttDurohPkjXgaETvoCJQmFpVSoYgOMwxPniKDmvDEoSxLEIHacAageesFOfXyBwiGIrhxgqKjEKbqpONKEkwlyQxlbMzdEYORwXwAqbnDcaijrVuEvtqjDUWiNCgBLYyNRPIrAkRACFtyzBvDpqJbuhNlVPWpmKfxeuxIMFgtKSsXJBCFkgybAKLLouWBFNIacSwvxRKcFUOVzrOcLCCnmHIHUDoVzAJTnLtjdCHIrmpylnOQaXwIYXARFbpVMnGiFhgNcfEjAyPXUPPfKeCbuKQndqHQFCIwmDxeADMdidDusoRVPHUQHTsesjnshnvrUstvyrUuVfhsNVukFuhtibcAhwljaoBQUIrBlVukJorxmjmvJbjqOYycWuiairqSCPtzCYesqMnEaKcmXGeaspjWOcpYgsPakeMRhIUyjEMyIzgHLHSwwbDmOfpVkGFYsVakurdxllEzXkUtUCDYQrRNXEJihyheicfPyShXJDlnFpgMyhdlouubKPsBDETQKoUzDfJuBgOVkwzflYihhKgjzTNtlDUqxBcRCbDVMYFbESsQzLeLMTbBdtDAdzYiHgnXagkUfGbGMPrwXVhAWWJudUDSFyDhJRmrulylFNdsLSvHnSYmIPwDncowYlfrSoQRbbDLPmzSfbtYmPndnMjvuTBcSWNegdTCIPYehqkrpGocrWeBOUyjUPMuPDqJxCbVihdrVYeYiITFKsuPVuuplSIMCcRSekydnEeNrXKjAQoicMfrkMSEaTevwBpTqmKwzv"));
  }  
}