/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package mypack;

/**
 *
 * @author Thinh
 */
public class ChiTietDonHang {
    private String maDon;//FK
    private String maSP;//FK
    private int soLuongSP;
    private double giaTien1SP;

    public ChiTietDonHang(String maDon, String maSP, int soLuongSP, double giaTien1SP) {
        this.maDon = maDon;
        this.maSP = maSP;
        this.soLuongSP = soLuongSP;
        this.giaTien1SP = giaTien1SP;
    }



    public String getMaDon() {
        return maDon;
    }

    public void setMaDon(String maDon) {
        this.maDon = maDon;
    }

    public String getMaSP() {
        return maSP;
    }

    public void setMaSP(String maSP) {
        this.maSP = maSP;
    }
    public double getGiaTriTongSP(){
        return giaTien1SP*((double)soLuongSP);
    }

    public int getSoLuongSP() {
        return soLuongSP;
    }

    public void setSoLuongSP(int soLuongSP) {
        this.soLuongSP = soLuongSP;
    }

    public double getGiaTien1SP() {
        return giaTien1SP;
    }

    public void setGiaTien1SP(double giaTien1SP) {
        this.giaTien1SP = giaTien1SP;
    }

    
    
    
}
