#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_LevelStreamingBase()
{
    class_< USeqAct_LevelStreamingBase, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_LevelStreamingBase", no_init)
        .def("StaticClass", &USeqAct_LevelStreamingBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}