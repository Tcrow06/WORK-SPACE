/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package mypack;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author Thinh
 */
public class LoaiSanPham {
    private String maLoaiSP;
    private String tenLoaiSP;
    private int soSP;
    
    private List<SanPham> dsSP;

    public LoaiSanPham(String maLoaiSP, String tenLoaiSP) {
        this.maLoaiSP = maLoaiSP;
        this.tenLoaiSP = tenLoaiSP;
        dsSP = new ArrayList<>();
    }

    public String getMaLoaiSP() {
        return maLoaiSP;
    }

    public void setMaLoaiSP(String maLoaiSP) {
        this.maLoaiSP = maLoaiSP;
    }

    public String getTenLoaiSP() {
        return tenLoaiSP;
    }

    public void setTenLoaiSP(String tenLoaiSP) {
        this.tenLoaiSP = tenLoaiSP;
    }

    public int getSoSP() {
        return soSP;
    }

    public void setSoSP(int soSP) {
        this.soSP = soSP;
    }

    public List<SanPham> getDsSP() {
        return dsSP;
    }

    public void setDsSP(List<SanPham> dsSP) {
        this.dsSP = dsSP;
    }
    

    
    
}
