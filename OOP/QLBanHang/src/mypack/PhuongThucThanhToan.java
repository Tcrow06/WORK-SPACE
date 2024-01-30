/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package mypack;

/**
 *
 * @author Thinh
 */
public class PhuongThucThanhToan {
    private String maTT;//PK
    private String phuongThuc;
    private double soTien;
    
    private String maDon; //PK

    public PhuongThucThanhToan(String maTT, String phuongThuc, double soTien, String maDon) {
        this.maTT = maTT;
        this.phuongThuc = phuongThuc;
        this.soTien = soTien;
        this.maDon = maDon;
    }

    public String getMaTT() {
        return maTT;
    }

    public void setMaTT(String maTT) {
        this.maTT = maTT;
    }

    public String getPhuongThuc() {
        return phuongThuc;
    }

    public void setPhuongThuc(String phuongThuc) {
        this.phuongThuc = phuongThuc;
    }

    public double getSoTien() {
        return soTien;
    }

    public void setSoTien(double soTien) {
        this.soTien = soTien;
    }

    public String getMaDon() {
        return maDon;
    }

    public void setMaDon(String maDon) {
        this.maDon = maDon;
    }

    
    
}
