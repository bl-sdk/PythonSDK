#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxClikWidget(py::module &m)
{
    py::class_< UGFxClikWidget,  UGFxObject   >(m, "UGFxClikWidget")
		.def_static("StaticClass", &UGFxClikWidget::StaticClass, py::return_value_policy::reference)
        .def("ASRemoveAllEventListeners", &UGFxClikWidget::ASRemoveAllEventListeners)
        .def("ASAddEventListener", &UGFxClikWidget::ASAddEventListener)
        .def("SetListener", &UGFxClikWidget::SetListener)
        .def("GetEventStringFromTypename", &UGFxClikWidget::GetEventStringFromTypename)
        .def("RemoveAllEventListeners", &UGFxClikWidget::RemoveAllEventListeners)
        .def("AddEventListener", &UGFxClikWidget::AddEventListener)
        .def("EventListener", &UGFxClikWidget::EventListener)
          ;
}