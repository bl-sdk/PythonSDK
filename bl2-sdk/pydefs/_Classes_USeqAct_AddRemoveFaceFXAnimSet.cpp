#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AddRemoveFaceFXAnimSet()
{
    class_< USeqAct_AddRemoveFaceFXAnimSet, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AddRemoveFaceFXAnimSet", no_init)
        .def_readwrite("FaceFXAnimSets", &USeqAct_AddRemoveFaceFXAnimSet::FaceFXAnimSets)
        .def("StaticClass", &USeqAct_AddRemoveFaceFXAnimSet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}