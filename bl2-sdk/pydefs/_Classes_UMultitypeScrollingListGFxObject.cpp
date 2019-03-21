#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMultitypeScrollingListGFxObject(py::object m)
{
    py::class_< UMultitypeScrollingListGFxObject,  UGFxObject   >(m, "UMultitypeScrollingListGFxObject")
        .def_readwrite("ParentPanel", &UMultitypeScrollingListGFxObject::ParentPanel)
        .def_readonly("UnknownData00", &UMultitypeScrollingListGFxObject::UnknownData00)
        .def("StaticClass", &UMultitypeScrollingListGFxObject::StaticClass, py::return_value_policy::reference)
        .def("ContinueInitialInit", &UMultitypeScrollingListGFxObject::ContinueInitialInit)
        .def("extGameScroll", &UMultitypeScrollingListGFxObject::extGameScroll)
        .def("getRendererAt", &UMultitypeScrollingListGFxObject::getRendererAt, py::return_value_policy::reference)
        .def("SetEquippingState", &UMultitypeScrollingListGFxObject::SetEquippingState)
        .def("extSetRendererInfo", &UMultitypeScrollingListGFxObject::extSetRendererInfo)
        .def("Init", &UMultitypeScrollingListGFxObject::Init)
        .def("InitMultitype", &UMultitypeScrollingListGFxObject::InitMultitype)
        .def("eventSetSelectedIndex", &UScrollingListGFxObject::eventSetSelectedIndex)
        .def("ScrollToIndex", &UScrollingListGFxObject::ScrollToIndex)
          ;
}