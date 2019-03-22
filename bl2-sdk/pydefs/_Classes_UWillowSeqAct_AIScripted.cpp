#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIScripted(py::module &m)
{
    py::class_< UWillowSeqAct_AIScripted,  USeqAct_Latent   >(m, "UWillowSeqAct_AIScripted")
        .def_readwrite("LookAt", &UWillowSeqAct_AIScripted::LookAt)
        .def_readwrite("Destination", &UWillowSeqAct_AIScripted::Destination)
        .def_readwrite("Stance", &UWillowSeqAct_AIScripted::Stance)
        .def_readwrite("FocusStyle", &UWillowSeqAct_AIScripted::FocusStyle)
        .def("StaticClass", &UWillowSeqAct_AIScripted::StaticClass, py::return_value_policy::reference)
          ;
}