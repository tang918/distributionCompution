#pragma once
#include  "hurricane/base/ITask.h"

namespace hurricane
{
    namespace base
    {
        class OutputCollector;
        class Values;
    } // namespace base
    namespace bolt
    {
        class IBolt:public base::ITask{
        public:
            virtual void Prepare(base::OutputCollector& outputCollector)=0;
            virtual void Cleanup()=0;
            virtual void Execute(const base::Values& values)=0;
            virtual IBolt* Clone()const =0;
        };
    } // namespace bolt
    
} // namespace hurricane
