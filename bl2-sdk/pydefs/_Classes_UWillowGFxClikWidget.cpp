#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxClikWidget(py::module &m)
{
    py::class_< UWillowGFxClikWidget,  UGFxClikWidget   >(m, "UWillowGFxClikWidget")
        .def("OnEvent", &UWillowGFxClikWidget::OnEvent)
        .def("OnClikEvent", &UWillowGFxClikWidget::OnClikEvent)
        .def("AddClikEvent", &UWillowGFxClikWidget::AddClikEvent)
          ;
}