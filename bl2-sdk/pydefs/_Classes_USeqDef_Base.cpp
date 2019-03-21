#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqDef_Base()
{
    class_< USeqDef_Base, bases< USequenceOp >  , boost::noncopyable>("USeqDef_Base", no_init)
        .def_readwrite("Definition", &USeqDef_Base::Definition)
        .def("StaticClass", &USeqDef_Base::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}