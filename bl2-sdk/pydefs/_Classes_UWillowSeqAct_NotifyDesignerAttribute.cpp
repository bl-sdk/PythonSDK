#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_NotifyDesignerAttribute(py::module &m)
{
    py::class_< UWillowSeqAct_NotifyDesignerAttribute,  USequenceAction   >(m, "UWillowSeqAct_NotifyDesignerAttribute")
        .def_readwrite("AttributeName", &UWillowSeqAct_NotifyDesignerAttribute::AttributeName)
        .def_readwrite("OptionalAttributeDefinition", &UWillowSeqAct_NotifyDesignerAttribute::OptionalAttributeDefinition)
        .def("StaticClass", &UWillowSeqAct_NotifyDesignerAttribute::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_NotifyDesignerAttribute::eventActivated)
          ;
}