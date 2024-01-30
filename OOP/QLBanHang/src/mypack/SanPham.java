/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package mypack;

/**
 *
 * @author Thinh
 */
public class SanPham {
    private String maSP;//PK
    private String tenSP;
    
    private String maLoaiSP;//FK
    private LoaiSanPham loaiSP;

    public SanPham(String maSP, String tenSP, String maLoaiSP) {
        this.maSP = maSP;
        this.tenSP = tenSP;
        this.maLoaiSP = maLoaiSP;
    }

    public String getMaSP() {
        return maSP;
    }

    public void setMaSP(String maSP) {
        this.maSP = maSP;
    }

    public String getTenSP() {
        return tenSP;
    }

    public void setTenSP(String tenSP) {
        this.tenSP = tenSP;
    }

    public String getMaLoaiSP() {
        return maLoaiSP;
    }

    public void setMaLoaiSP(String maLoaiSP) {
        this.maLoaiSP = maLoaiSP;
    }

    public LoaiSanPham getLoaiSP() {
        return loaiSP;
    }

    public void setLoaiSP(LoaiSanPham loaiSP) {
        this.loaiSP = loaiSP;
    }
    
}
