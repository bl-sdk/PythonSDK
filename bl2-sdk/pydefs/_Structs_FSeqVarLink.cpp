#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSeqVarLink()
{
    py::class_< FSeqVarLink >("FSeqVarLink")
        .def_readwrite("ExpectedType", &FSeqVarLink::ExpectedType)
        .def_readwrite("LinkedVariables", &FSeqVarLink::LinkedVariables)
        .def_readwrite("LinkDesc", &FSeqVarLink::LinkDesc)
        .def_readwrite("LinkVar", &FSeqVarLink::LinkVar)
        .def_readwrite("PropertyName", &FSeqVarLink::PropertyName)
        .def_readwrite("MinVars", &FSeqVarLink::MinVars)
        .def_readwrite("MaxVars", &FSeqVarLink::MaxVars)
        .def_readwrite("CachedProperty", &FSeqVarLink::CachedProperty)
  ;
}