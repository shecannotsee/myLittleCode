#include <pthread.h>
//1//int pthread_create(pthread_t* tid,pthread_attr_t* attr,fun* f,void* arg);
//1//pthread_t pthread_self(void);
//1//void pthread_exit(void* thread_return);
//1//int pthread_cancel(pthread_t tid);
//1//int pthread_join(pthread_t tid,void** thread_return);
//1//int pthread_detach(pthread_t tid);
#include <semaphore.h>
//8//int sem_wait(sem_t* s);/*P(s)*/
//8//int sem_post(sem_t* s);/*V(s)*/
//8//int sem_init(sem_t* sem,0,unsigned int value);



