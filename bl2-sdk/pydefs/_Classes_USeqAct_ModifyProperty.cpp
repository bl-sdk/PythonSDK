#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyProperty(py::object m)
{
    py::class_< USeqAct_ModifyProperty,  USequenceAction   >(m, "USeqAct_ModifyProperty")
        .def_readwrite("Properties", &USeqAct_ModifyProperty::Properties)
        .def("StaticClass", &USeqAct_ModifyProperty::StaticClass, py::return_value_policy::reference)
          ;
}