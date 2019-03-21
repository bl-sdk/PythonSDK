#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBodyInstanceDataUnion(py::object m)
{
    py::class_< FBodyInstanceDataUnion >(m, "FBodyInstanceDataUnion")
        .def_readwrite("Data", &FBodyInstanceDataUnion::Data)
        .def_readwrite("ParentAttachmentIdentifier", &FBodyInstanceDataUnion::ParentAttachmentIdentifier)
        .def_readwrite("AttachmentBaseInstanceDataIndex", &FBodyInstanceDataUnion::AttachmentBaseInstanceDataIndex)
        .def_readwrite("SwitchIdentifier", &FBodyInstanceDataUnion::SwitchIdentifier)
  ;
}