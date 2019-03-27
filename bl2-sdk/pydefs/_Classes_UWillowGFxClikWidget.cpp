#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxClikWidget(py::module &m)
{
    py::class_< UWillowGFxClikWidget,  UGFxClikWidget   >(m, "UWillowGFxClikWidget")
		.def_static("StaticClass", &UWillowGFxClikWidget::StaticClass, py::return_value_policy::reference)
        .def("OnEvent", &UWillowGFxClikWidget::OnEvent)
        .def("OnClikEvent", &UWillowGFxClikWidget::OnClikEvent)
        .def("AddClikEvent", &UWillowGFxClikWidget::AddClikEvent)
          ;
}