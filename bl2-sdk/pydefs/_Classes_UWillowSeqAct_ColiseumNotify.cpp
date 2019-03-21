#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumNotify()
{
    py::class_< UWillowSeqAct_ColiseumNotify,  USequenceAction   >("UWillowSeqAct_ColiseumNotify")
        .def_readwrite("NotifyType", &UWillowSeqAct_ColiseumNotify::NotifyType)
        .def("StaticClass", &UWillowSeqAct_ColiseumNotify::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_ColiseumNotify::eventActivated)
        .staticmethod("StaticClass")
  ;
}