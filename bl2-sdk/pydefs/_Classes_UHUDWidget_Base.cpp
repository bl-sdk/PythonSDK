#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHUDWidget_Base()
{
    py::class_< UHUDWidget_Base,  UGFxObject   >("UHUDWidget_Base")
        .def_readwrite("MyHUDMovie", &UHUDWidget_Base::MyHUDMovie)
        .def("StaticClass", &UHUDWidget_Base::StaticClass, py::return_value_policy::reference)
        .def("Update", &UHUDWidget_Base::Update)
        .def("Deinit", &UHUDWidget_Base::Deinit)
        .def("Init", &UHUDWidget_Base::Init)
        .staticmethod("StaticClass")
  ;
}