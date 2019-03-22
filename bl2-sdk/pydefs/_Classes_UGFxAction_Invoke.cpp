#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxAction_Invoke(py::module &m)
{
    py::class_< UGFxAction_Invoke,  USequenceAction   >(m, "UGFxAction_Invoke")
        .def_readwrite("Movie", &UGFxAction_Invoke::Movie)
        .def_readwrite("MethodName", &UGFxAction_Invoke::MethodName)
        .def_readwrite("Arguments", &UGFxAction_Invoke::Arguments)
        .def("eventIsValidLevelSequenceObject", &UGFxAction_Invoke::eventIsValidLevelSequenceObject)
          ;
}