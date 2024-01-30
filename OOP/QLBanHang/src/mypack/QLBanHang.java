 /*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package mypack;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.Comparator;
import java.util.Map;
import java.util.Optional;
import java.util.Set;

/**
 *
 * @author Thinh
 */
public class QLBanHang {

    
    public static List<KhachHang> dsKH;
    public static List<DonDatHang> dsDon;
    public static List<LoaiSanPham> dsLoaiSP;
    public static List<SanPham> dsSP;
    public static List<PhuongThucThanhToan> dsPTThanhToan;
    public static List<ChiTietDonHang> dsCTDon;
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //Tao danh sach khach hang
        dsKH = new ArrayList<>();
        
        //Tao danh sach Loai san pham
        dsLoaiSP = new ArrayList<>();
        
        //Tao danh sach san pham
        dsSP = new ArrayList<>();
        
        //Tao danh sach don
        dsDon = new ArrayList<>();
        
        //Tao danh sach phuong thuc thanh toan
        dsPTThanhToan = new ArrayList<>();
        
        //Tao danh sach chi tiet don
        dsCTDon = new ArrayList<>();
        
        TaoDSKhachHang();
        TaoDSDon();
        TaoDSPTThanhToan();
        TaoDSLoaiSP();
        TaoDSSP();
        TaoDSChiTietDonHang();
        
        //Cau so 1: Liet ke danh sach cac san pham khi biet ma loai san pham
       
        System.out.println("Cau so 1: Liet ke danh sach cac san pham khi biet ma loai san pham: L01");
        CauSo1("L01");
        System.out.println("");
        
        //Cau so 2: Cho biet co bao nhieu san pham khi biet ma loai san pham 
        
        System.out.println("Cau so 2: Cho biet co bao nhieu san pham khi biet ma loai san pham: L03");
        System.out.println("-Loai san phan L03 co: " + CauSo2("L03") + "(san pham)");
        System.out.println("");
        
        //Cau so 3: Cho biet loai san pham nao co nhieu san pham nhat
        System.out.println("Cau so 3: Cho biet loai san pham nao co nhieu san pham nhat");
        CauSo3();
        System.out.println("");
        
        //Cau so 4: Cho biet san pham nao chua ban duoc trong danh sach can san pham
        System.out.println("-Cau so 4: Danh sach cac san pham chua duoc ban: " );
        CauSo4();
        System.out.println("");
        
        //Cau so 5: Cho biet don hang nao da duoc thanh toan hoan tat
        System.out.println("Cau so 5: Cho biet don hang nao da duoc thanh toan hoan tat: ");
        CauSo5();
        System.out.println("");
        
        //Cau so 6: Cho biet san pham nao co so luot ban cao nhat
        System.out.println("Cau so 6: Cho biet san pham nao co so luot ban cao nhat và thấp nhất:");
        CauSo6();
        System.out.println("");
        
//        //Cau so 7: Liet ke danh sach san pham theo tung san pham va tinh tong so luong san pham
//        System.out.println("Cau so 7: Liet ke danh sach san pham theo tung san pham va tinh tong so luong san pham");
//        CauSo7();
//        System.out.println("");
//        
//        //Cau so 8: Cho biet san pham nao co doanh thu cao nhat va thap nhat, >= trung binh
//        System.out.println("Cau so 8: Cho biet san pham nao co doanh thu cao nhat va thap nhat, >= trung binh");
//        CauSo8();
//        System.out.println("");
//        
//        
//        //Cau so 9: cho biet loai san pham nao hien tai khong co san pham
//        System.out.println("Cau so 9: cho biet loai san pham nao hien tai khong co san pham:");
//        CauSo9();
//        System.out.println("");
//        
//        //Cau so 10 : Dem so lan thanh toan theo tung phuong thuc
//        System.out.println("Cau so 10 : Dem so lan thanh toan theo tung phuong thuc:");
//        CauSo10();
        
        CauSo11();
        
        
    }
    public static void TaoDSKhachHang(){
        dsKH.add(new KhachHang("KH01","Nguyen Van A", "0330001113"));
        dsKH.add(new KhachHang("KH02","Nguyen Van B", "0330001114"));
        dsKH.add(new KhachHang("KH03","Nguyen Van C","03330001115"));
    }
    public static void TaoDSDon(){
        dsDon.add(new DonDatHang("DON01",860000,"KH01"));
        dsDon.add(new DonDatHang("DON02",1140000, "KH01"));
        dsDon.add(new DonDatHang("DON03",535000,"KH01"));
        dsDon.add(new DonDatHang("DON04",950000,"KH02"));
        dsDon.add(new DonDatHang("DON05",590000,"KH02"));
        dsDon.add(new DonDatHang("DON06",705000, "KH02"));
        dsDon.add(new DonDatHang("DON07",955000,"KH03"));
        dsDon.add(new DonDatHang("DON08",585000,"KH03"));
    }
    public static void TaoDSPTThanhToan(){
        dsPTThanhToan.add(new PhuongThucThanhToan("TT01", "tien mat", 460000, "DON01"));
        dsPTThanhToan.add(new PhuongThucThanhToan("TT02", "chuyen khoan",400000, "DON01"));
        
        dsPTThanhToan.add(new PhuongThucThanhToan("TT03", "chuyen khoan",500000, "DON02"));
        dsPTThanhToan.add(new PhuongThucThanhToan("TT04", "tien mat", 500000, "DON02"));
        
        dsPTThanhToan.add(new PhuongThucThanhToan("TT05", "chuyen khoan", 535000, "DON03"));
        
        dsPTThanhToan.add(new PhuongThucThanhToan("TT06", "chuyen khoan",950000, "DON04"));
        
        dsPTThanhToan.add(new PhuongThucThanhToan("TT07", "chuyen khoan",590000, "DON05"));
        
        dsPTThanhToan.add(new PhuongThucThanhToan("TT08", "tien mat",705000 , "DON06"));
        
        dsPTThanhToan.add(new PhuongThucThanhToan("TT09", "chuyen khoan",555000, "DON07"));
        dsPTThanhToan.add(new PhuongThucThanhToan("TT10", "chuyen khoan",400000, "DON07"));
        
//        dsPTThanhToan.add(new PhuongThucThanhToan("TT11", "chuyen khoan",0, "DON08"));
    }
    public static void TaoDSLoaiSP(){
        dsLoaiSP.add(new LoaiSanPham("L01", "Quan nam nu"));
        dsLoaiSP.add(new LoaiSanPham("L02", "Ao nam nu"));
        dsLoaiSP.add(new LoaiSanPham("L03", "Dam vay nu"));
        dsLoaiSP.add(new LoaiSanPham("L04", "Giay"));
        dsLoaiSP.add(new LoaiSanPham("L05", "Phu kien"));
        dsLoaiSP.add(new LoaiSanPham("L06","Dep"));
    }
    public static void TaoDSSP(){
        dsSP.add(new SanPham("SP01", "Quan jean","L01"));
        dsSP.add(new SanPham("SP02", "Quan kaki","L01"));
        dsSP.add(new SanPham("SP03", "Quan au","L01"));
        dsSP.add(new SanPham("SP04", "Quan short","L01"));
        
        dsSP.add(new SanPham("SP05", "Ao thun co tron","L02"));
        dsSP.add(new SanPham("SP06", "Ao polo","L02"));
        dsSP.add(new SanPham("SP07", "Ao so mi","L02"));
        dsSP.add(new SanPham("SP08", "Ao hoodie","L02"));
        dsSP.add(new SanPham("SP09", "Ao khoac gio","L02"));
        
        dsSP.add(new SanPham("SP10", "Vay","L03"));
        dsSP.add(new SanPham("SP11", "Chan vay","L03"));
        dsSP.add(new SanPham("SP12", "Dam","L03"));
        
        dsSP.add(new SanPham("SP13", "Giay sneaker","L04"));
        dsSP.add(new SanPham("SP14", "Giay air force 1","L04"));
        dsSP.add(new SanPham("SP15", "Giay adidas Samba","L04"));
        
        dsSP.add(new SanPham("SP16", "Mu","L05"));
        dsSP.add(new SanPham("SP17", "Khan quang co len am mua dong","L05"));
        dsSP.add(new SanPham("SP18", "Tat","L05"));
    }
    public static void TaoDSChiTietDonHang(){
        dsCTDon.add(new ChiTietDonHang("DON01", "SP01", 1, 170000));
        dsCTDon.add(new ChiTietDonHang("DON01", "SP05", 2, 200000));
        dsCTDon.add(new ChiTietDonHang("DON01", "SP04", 1, 115000));
        dsCTDon.add(new ChiTietDonHang("DON01", "SP09", 1, 175000));
        
        dsCTDon.add(new ChiTietDonHang("DON02", "SP03", 2, 170000));
        dsCTDon.add(new ChiTietDonHang("DON02", "SP07", 1, 160000));
        dsCTDon.add(new ChiTietDonHang("DON02", "SP15", 1, 500000));
        dsCTDon.add(new ChiTietDonHang("DON02", "SP18", 2, 20000));
        dsCTDon.add(new ChiTietDonHang("DON02", "SP05", 1, 100000));
        
        dsCTDon.add(new ChiTietDonHang("DON03", "SP08", 1, 145000));
        dsCTDon.add(new ChiTietDonHang("DON03", "SP06", 1, 110000));
        dsCTDon.add(new ChiTietDonHang("DON03", "SP04", 2, 115000));
        dsCTDon.add(new ChiTietDonHang("DON03", "SP16", 1, 50000));
        
        dsCTDon.add(new ChiTietDonHang("DON04", "SP01", 2, 170000));
        dsCTDon.add(new ChiTietDonHang("DON04", "SP06", 1, 110000));
        dsCTDon.add(new ChiTietDonHang("DON04", "SP08", 1, 145000));
        dsCTDon.add(new ChiTietDonHang("DON04", "SP14", 1, 200000));
        dsCTDon.add(new ChiTietDonHang("DON04", "SP18", 2, 20000));
        dsCTDon.add(new ChiTietDonHang("DON04", "SP04", 1, 115000));
        
        dsCTDon.add(new ChiTietDonHang("DON05", "SP04", 2, 115000));
        dsCTDon.add(new ChiTietDonHang("DON05", "SP03", 1, 170000));
        dsCTDon.add(new ChiTietDonHang("DON05", "SP13", 1, 150000));
        dsCTDon.add(new ChiTietDonHang("DON05", "SP18", 2, 20000));
        
        dsCTDon.add(new ChiTietDonHang("DON06", "SP09", 1, 175000));
        dsCTDon.add(new ChiTietDonHang("DON06", "SP16", 2, 50000));
        dsCTDon.add(new ChiTietDonHang("DON06", "SP04", 2, 115000));
        dsCTDon.add(new ChiTietDonHang("DON06", "SP05", 2, 100000));
        
        dsCTDon.add(new ChiTietDonHang("DON07", "SP10", 2, 160000));
        dsCTDon.add(new ChiTietDonHang("DON07", "SP12", 1, 130000));
        dsCTDon.add(new ChiTietDonHang("DON07", "SP08", 1, 145000));
        dsCTDon.add(new ChiTietDonHang("DON07", "SP02", 1, 170000));
        dsCTDon.add(new ChiTietDonHang("DON07", "SP13", 1, 150000));
        dsCTDon.add(new ChiTietDonHang("DON07", "SP18", 2, 20000));
        
        dsCTDon.add(new ChiTietDonHang("DON08", "SP05", 1, 100000));
        dsCTDon.add(new ChiTietDonHang("DON08", "SP11", 1, 150000));
        dsCTDon.add(new ChiTietDonHang("DON08", "SP13", 1, 150000));
        dsCTDon.add(new ChiTietDonHang("DON08", "SP08", 1, 145000));
        dsCTDon.add(new ChiTietDonHang("DON08", "SP18", 2, 20000));
           
    }
    
    //Cau so 1: Liet ke danh sach cac san pham khi biet ma loai san pham
    public static void CauSo1(String maLoaiSP){
        List<SanPham> lsp = dsSP
                            .stream()
                            .filter(sp -> sp.getMaLoaiSP().equalsIgnoreCase(maLoaiSP))
                            .collect(Collectors.toList());
        if(lsp.isEmpty()){
            System.out.println("-Loai san pham nay khong co trong cua hang");
        }
        else{
            System.out.println("-Danh sach cac san pham thuoc loai: " + maLoaiSP);
            for(SanPham sp : lsp){
                System.out.println("Ma san pham: " + sp.getMaSP() +
                                    ", ten san pham: " + sp.getTenSP());
            }
        }
    }
    //Cau so 2: Cho biet co bao nhieu san pham khi biet ma loai san pham
    public static int CauSo2(String maLoaiSP){
        long soSP = dsSP.stream()
                        .filter(sp -> sp.getMaLoaiSP().equalsIgnoreCase(maLoaiSP))
                        .count();
        return (int)soSP;
    }
    //Cau so 3: Cho biet loai san pham nao co nhieu san pham nhat
    public static void CauSo3(){
        for(LoaiSanPham lsp: dsLoaiSP){
            int count = CauSo2(lsp.getMaLoaiSP());
            lsp.setSoSP(count);
        }
            
        Optional<LoaiSanPham> lspnhieunhat = dsLoaiSP
                                            .stream()
                                            .max(Comparator.comparingInt(loaisp-> loaisp.getSoSP()));
        lspnhieunhat.ifPresent(loaiSP -> {
            System.out.println("-Loai san pham co nhieu san pham nhat la: " + loaiSP.getTenLoaiSP());
    });
        
    }
    
    //Cau so 4: Cho biet san pham nao chua ban duoc trong danh sach can san pham
    public static void CauSo4(){
        //Tao 1 mot chua cac san pham da duoc ban
        Set<String> dsSPDaBan = dsCTDon
                                .stream()
                                .map(ChiTietDonHang::getMaSP)
                                .collect(Collectors.toSet());
        
        //Loc nhung san pham chua duoc ban
        List<SanPham> dsSPChuaBan = dsSP.stream()
                                   .filter(sp -> !dsSPDaBan.contains(sp.getMaSP()))
                                   .collect(Collectors.toList());
        
        //In ra cac san pham chua duoc ban
        dsSPChuaBan.forEach(sp->{
            System.out.println("Ma san pham: " + sp.getMaSP()
                                +", ten san pham: " + sp.getTenSP());
        });
    }
    //Cau so 5: Cho biet don hang nao da duoc thanh toan hoan tat
    public static void CauSo5(){
        Map<String, Double> tongTienTTDonHang = dsPTThanhToan.stream()
                                                .collect(Collectors.groupingBy(PhuongThucThanhToan::getMaDon,
                                                        Collectors.summingDouble(PhuongThucThanhToan::getSoTien))); 
        
        dsDon.stream()
              .filter(don-> don.getGiaTriDon()== tongTienTTDonHang.getOrDefault(don.getMaDon(), 0.0))
              .forEach(don -> {
                  System.out.println("Don hang co ma : " + don.getMaDon() + " da duoc thanh toan hoan tat");
              });
    }
    
    //Cau so 6: Cho biet san pham nao co so luot ban cao nhat va thap nhat
    public static void CauSo6(){
        Map<String, Integer> soLanXHperSP = dsCTDon.stream()
                                            .collect(Collectors.groupingBy(ChiTietDonHang::getMaSP,
                                                            Collectors.summingInt(ChiTietDonHang::getSoLuongSP)));
        Optional<Integer> maxSL = soLanXHperSP.values().stream().max(Integer::compare);
        Optional<Integer> minSL = soLanXHperSP.values().stream().min(Integer:: compare);
                            
        soLanXHperSP.entrySet().stream()
                    .filter(entry -> entry.getValue().equals(maxSL.orElse(0)))
                    .forEach(entry -> System.out.println("-Ma san phan: " + entry.getKey() + " co so luot ban cao nhat: " + entry.getValue()));
            
//        soLanXHperSP.entrySet().stream()
//
//                    .forEach(entry -> System.out.println("-Ma san phan: " + entry.getKey() + " co so luot ban: " + entry.getValue()));

        
        soLanXHperSP.entrySet().stream()
                    .filter(entry -> entry.getValue().equals(minSL.orElse(0)))
                    .forEach(entry -> System.out.println("-Ma san phan: " + entry.getKey() + " co so luot ban thap nhat: " + entry.getValue()));
        

    }
    //Cau so 7: Liet ke danh sach san pham theo tung san pham va tinh tong so luong san pham
    public static void CauSo7(){
        dsLoaiSP.forEach(loaiSP->{
            List<SanPham> lsp = dsSP.stream()
                                .filter(sp -> sp.getMaLoaiSP().equalsIgnoreCase(loaiSP.getMaLoaiSP()))
                                .collect(Collectors.toList());
            System.out.println("Ma loai san pham: " + loaiSP.getTenLoaiSP());
            
            loaiSP.setDsSP(lsp);
            
            lsp.forEach(sp -> System.out.println("-" + sp.getTenSP()));
            
            long sluong = lsp.stream().count();
            System.out.println("Tong so luong san pham: " + sluong);
            
        });
        
        
    }
    
    //Cau so 8: Cho biet san pham nao co doanh thu cao nhat va thap nhat, >= trung binh
    public static void CauSo8(){
        Map<String,Double> tongDoanhThuTheoSP = dsCTDon.stream()
                                                .collect(Collectors.groupingBy(ChiTietDonHang::getMaSP,
                                                                Collectors.summingDouble(ChiTietDonHang::getGiaTriTongSP)));
        
        Map<String,Integer> tongSoLuongTheoSP = dsCTDon.stream()
                                                .collect(Collectors.groupingBy(ChiTietDonHang::getMaSP,
                                                                Collectors.summingInt(ChiTietDonHang::getSoLuongSP)));
        
        Optional<Double> maxDoanhThu = tongDoanhThuTheoSP.values().stream().max(Double::compare);
        Optional<Double> minDoanhThu = tongDoanhThuTheoSP.values().stream().min(Double::compare);
        
        double totalDoanhThu = tongDoanhThuTheoSP.values().stream()
                                 .mapToDouble(Double::doubleValue)
                                 .sum();
        int soLuong = dsCTDon.stream().collect(Collectors.summingInt(ChiTietDonHang::getSoLuongSP));
        double averageDoanhThu =totalDoanhThu/ soLuong;
        System.out.println("-Doanh thu cao nhat: " + maxDoanhThu.get());
        tongDoanhThuTheoSP.entrySet().stream()
                            .filter(entry -> entry.getValue().equals(maxDoanhThu.orElse(0.0)))
                            .forEach(entry -> System.out.println("Ma san pham: " + entry.getKey() + " co doanh thu cao nhat: " + entry.getValue() +" VND"));
        
        System.out.println("-Doanh thu thap nhat: " + minDoanhThu.get());
        tongDoanhThuTheoSP.entrySet().stream()
                            .filter(entry -> entry.getValue().equals(minDoanhThu.orElse(0.0)))
                            .forEach(entry -> System.out.println("Ma san pham: " + entry.getKey() + " co doanh thu thap nhat: " + entry.getValue() +" VND"));
        
        
        System.out.println("Doanh thu trung binh theo san pham: " + averageDoanhThu + " VND");
        
       
        
        System.out.println("-Loai san pham co doanh thu >= trung binh");        
         dsLoaiSP.stream()
                .filter(loaiSp ->{
                    double t1 = loaiSp.getDsSP().stream()
                                  .mapToDouble(sp -> tongDoanhThuTheoSP.getOrDefault(sp.getMaSP(),0.0))
                                  .sum();
                    int t = loaiSp.getDsSP().stream()
                                   .mapToInt(sp -> tongSoLuongTheoSP.getOrDefault(sp.getMaSP(), 0))
                                   .sum();
                    return t1/t >= averageDoanhThu;
                                
                })
                .forEach(loaiSP-> System.out.println("-Loai san pham: " + loaiSP.getTenLoaiSP()));
                        
        
                                            
    }
    
    //Cau so 9: cho biet loai san pham nao hien tai khong co san pham
    public static void CauSo9(){
       
        Set<String> maLoaiSPCoSP = dsSP.stream()
                                   .map(SanPham::getMaLoaiSP)
                                   .collect(Collectors.toSet());
        
        dsLoaiSP.stream()
                .filter(lsp -> !maLoaiSPCoSP.contains(lsp.getMaLoaiSP()))
                .forEach(sp -> System.out.println("Ten loai san pham: " + sp.getTenLoaiSP()));
        
        
        
        
    }
    
    //Cau so 10 : Dem so lan thanh toan theo tung phuong thuc
    
    public static void CauSo10(){
        Map<String, Long> count = dsPTThanhToan.stream()
                                                  .collect(Collectors.groupingBy(PhuongThucThanhToan::getPhuongThuc,
                                                                        Collectors.counting()));
        count.entrySet().forEach(sp -> {
            System.out.println("Phuong thuc thanh toan : " + sp.getKey() +" " + sp.getValue() + " lan");
        });
        
    }
    // Câu 11 cho biết những loại sản phẩm nào được khách hàng mua nhiều nhất.
    public static void CauSo11(){
        Map<String, Integer> soLanXHperSP = dsCTDon.stream()
                                            .collect(Collectors.groupingBy(ChiTietDonHang::getMaSP,
                                                            Collectors.summingInt(ChiTietDonHang::getSoLuongSP)));
        Map<String, Integer> soLuotBanLoaiSanPham = dsSP.stream()
                                                   .collect(Collectors.toMap(
                                                           SanPham::getMaLoaiSP,
                                                          sp -> soLanXHperSP.getOrDefault(sp.getMaSP(), 0),
                                                          Integer::sum
                                                   ));
        
        Optional<Integer> maxSLLSP =  soLuotBanLoaiSanPham.values().stream().max(Integer::compare);
        
        soLuotBanLoaiSanPham.entrySet().stream()
                    .filter(entry -> entry.getValue().equals(maxSLLSP.orElse(0)))
                    .forEach(entry -> System.out.println("-Ma loai san phan: " + entry.getKey() 
                            +  " duoc khach mua nhieu nhat: " + entry.getValue()));
        
                 
    }
}
