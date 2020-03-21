
// MFC_0317_3View.h : CMFC_0317_3View 类的接口
//

#pragma once


class CMFC_0317_3View : public CView
{
protected: // 仅从序列化创建
	CMFC_0317_3View();
	DECLARE_DYNCREATE(CMFC_0317_3View)

// 特性
public:
	CMFC_0317_3Doc* GetDocument() const;

// 操作
public:
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC_0317_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFC_0317_3View.cpp 中的调试版本
inline CMFC_0317_3Doc* CMFC_0317_3View::GetDocument() const
   { return reinterpret_cast<CMFC_0317_3Doc*>(m_pDocument); }
#endif

