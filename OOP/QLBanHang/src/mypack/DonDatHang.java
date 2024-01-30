/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package mypack;

/**
 *
 * @author Thinh
 */
public class DonDatHang {
    private String maDon;//PK
    private double giaTriDon;

    
    private String maKH;//FK
    private KhachHang khacHang;

    public DonDatHang(String maDon, double giaTriDon, String maKH) {
        this.maDon = maDon;
        this.giaTriDon = giaTriDon;
        this.maKH = maKH;
    }

    public String getMaDon() {
        return maDon;
    }

    public void setMaDon(String maDon) {
        this.maDon = maDon;
    }

    public double getGiaTriDon() {
        return giaTriDon;
    }

    public void setGiaTriDon(double giaTriDon) {
        this.giaTriDon = giaTriDon;
    }

    public String getMaKH() {
        return maKH;
    }

    public void setMaKH(String maKH) {
        this.maKH = maKH;
    }

    public KhachHang getKhacHang() {
        return khacHang;
    }

    public void setKhacHang(KhachHang khacHang) {
        this.khacHang = khacHang;
    }
    
}
