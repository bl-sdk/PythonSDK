#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetDamageInstigator()
{
    class_< USeqAct_SetDamageInstigator, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetDamageInstigator", no_init)
        .def_readwrite("DamageInstigator", &USeqAct_SetDamageInstigator::DamageInstigator)
        .def("StaticClass", &USeqAct_SetDamageInstigator::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}