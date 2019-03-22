#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumNotify(py::module &m)
{
    py::class_< UWillowSeqAct_ColiseumNotify,  USequenceAction   >(m, "UWillowSeqAct_ColiseumNotify")
        .def_readwrite("NotifyType", &UWillowSeqAct_ColiseumNotify::NotifyType)
        .def("StaticClass", &UWillowSeqAct_ColiseumNotify::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_ColiseumNotify::eventActivated)
          ;
}