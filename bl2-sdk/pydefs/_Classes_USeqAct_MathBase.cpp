#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_MathBase()
{
    class_< USeqAct_MathBase, bases< USequenceAction >  , boost::noncopyable>("USeqAct_MathBase", no_init)
        .def_readwrite("Operation", &USeqAct_MathBase::Operation)
        .def("StaticClass", &USeqAct_MathBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}